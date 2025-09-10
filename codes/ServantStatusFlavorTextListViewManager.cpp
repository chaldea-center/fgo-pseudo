void ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C23819 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_4C23819 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4C23818 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    byte_4C23818 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantProfileList, (int32_t)v6, v7, v8);
  this->fields.isInput = 1;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


ServantStatusFlavorTextListViewObject_o *ServantStatusFlavorTextListViewManager__AddObjectList(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  ServantStatusFlavorTextListViewObject_o *Component_object; // x0
  __int64 v9; // x1
  ServantStatusFlavorTextListViewObject_o *v10; // x21
  const MethodInfo *v11; // x7
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v18; // x8

  if ( (byte_4C23810 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23810 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         (Il2CppObject *)prefab,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v7,
                                                                  0,
                                                                  0);
  v10 = 0;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_14;
    Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v7,
                                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    if ( !Component_object
      || (v10 = Component_object,
          ServantStatusFlavorTextListViewObject__SetItem(
            Component_object,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v11),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, v10, v12),
          (Component_object = (ServantStatusFlavorTextListViewObject_o *)this->fields.objectList) == 0)
      || (m_CachedPtr = Component_object->fields.m_CachedPtr,
          v16 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__,
          ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
          !m_CachedPtr) )
    {
LABEL_14:
      sub_1C2D6EC(Component_object, v9);
    }
    m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Component_object,
        (Il2CppObject *)v10,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v18 + 32) = v10;
      sub_1C2D434((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v10, v13, v14);
    }
  }
  return v10;
}


System_Collections_IEnumerator_o *ServantStatusFlavorTextListViewManager__AutoScroll_IE(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t targetIndex,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C2380E & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
    byte_4C2380E = 1;
  }
  v7 = sub_1C2D6DC(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v3; // x28
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  void *transform; // x0
  Il2CppObject *Component_object; // x20
  float v12; // s8
  float v13; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x29
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x3
  Il2CppObject *voice2Object; // x22
  Il2CppObject *v24; // x23
  const MethodInfo *v25; // x7
  ServantStatusFlavorTextListViewObject_o *v26; // x23
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  ServantStatusListViewItem_o *v34; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  Il2CppObject *profileObject; // x22
  Il2CppObject *v37; // x22
  Il2CppObject *v38; // x0
  ServantStatusListViewItem_o *v39; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v41; // x20
  const MethodInfo *v42; // x7
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x23
  System_Comparison_T__o *v51; // x24
  Il2CppObject *v52; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int v56; // w21
  int32_t v57; // w24
  int v58; // w20
  ServantCommentEntity_o *v59; // x25
  struct ServantEntity_o *v60; // x8
  int32_t v61; // w26
  const MethodInfo *v62; // x3
  UnityEngine_Object_c *v63; // x0
  Il2CppObject *profile2Object; // x26
  Il2CppObject *v65; // x26
  Il2CppObject *v66; // x26
  int32_t v67; // w27
  _BOOL8 IsOpen; // x0
  const MethodInfo *v69; // x2
  UnityEngine_Object_c **v70; // x21
  ServantStatusListViewItem_o **v71; // x20
  ServantStatusListViewItem_o *v72; // x28
  int32_t id; // w29
  bool IsNew; // w22
  const MethodInfo *v75; // x7
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x7
  System_String_o *CondTitle; // x27
  const MethodInfo *v79; // x2
  __int64 v80; // x27
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  System_Collections_Generic_List_object__o *v93; // x8
  struct System_Object_array *items; // x9
  _QWORD *v95; // x10
  __int64 size; // x11
  Il2CppClass **v97; // x0
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v100; // x3
  UnityEngine_Object_o *v101; // x20
  UIPanel_o *v102; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v105; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v108; // x22
  EventDelegate_Callback_o *v109; // x21
  struct UIScrollBar_o *v110; // x8
  System_Collections_Generic_List_EventDelegate__o *v111; // x20
  EventDelegate_Callback_o *v112; // x21
  System_Collections_Generic_List_object__o *v113; // [xsp+8h] [xbp-B8h]
  int v114; // [xsp+14h] [xbp-ACh]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+18h] [xbp-A8h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+20h] [xbp-A0h]
  int v117; // [xsp+28h] [xbp-98h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-94h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4

  v3 = &UnityEngine_Object_TypeInfo;
  if ( (byte_4C23809 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&System_Comparison_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
    sub_1C2D490(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__);
    sub_1C2D490(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__);
    sub_1C2D490(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    sub_1C2D490(&Method_UIScrollView_OnScrollBar__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23809 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0;
  *(_QWORD *)&basePositon.fields.x = 0;
  voice = 0;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_124;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_124;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_124;
      v12 = *((float *)&Component_object[20].monitor + 1);
      v13 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_124;
      v122.fields.x = -v12;
      v122.fields.y = -v13;
      v122.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v122, 0);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_124;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v8, v9);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v15;
  p_objectList = &this->fields.objectList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v18;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantProfileList, (int32_t)v18, v19, v20);
  *(_QWORD *)&basePositon.fields.x = 0;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_124;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v21);
  if ( System_String__IsNullOrEmpty(voice, 0) )
  {
    voice2Object = (Il2CppObject *)this->fields.voice2Object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            voice2Object,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_124;
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v24,
                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_124;
      v26 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v25);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v26, v27);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_124;
      v30 = *((_QWORD *)transform + 2);
      v31 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++*((_DWORD *)transform + 7);
      if ( !v30 )
        goto LABEL_124;
      v32 = *((int *)transform + 6);
      if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v26,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * v32;
        *((_DWORD *)transform + 6) = v32 + 1;
        *(_QWORD *)(v33 + 32) = v26;
        sub_1C2D434((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v26, v28, v29);
      }
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v22);
  }
  v34 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_124;
  if ( v34->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v34->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_110;
    profileObject = (Il2CppObject *)this->fields.profileObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v37 = UnityEngine_Object__Instantiate_object_(
            profileObject,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_110;
    if ( v37 )
    {
      v38 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v37,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v39 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v41 = (ServantStatusFlavorTextListViewObject_o *)v38;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0);
      if ( v41 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v41,
          v39,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v42);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v41, v43);
        transform = this->fields.objectList;
        if ( transform )
        {
          v46 = *((_QWORD *)transform + 2);
          v47 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
          ++*((_DWORD *)transform + 7);
          if ( v46 )
          {
            v48 = *((int *)transform + 6);
            if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                (Il2CppObject *)v41,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = v46 + 8 * v48;
              *((_DWORD *)transform + 6) = v48 + 1;
              *(_QWORD *)(v49 + 32) = v41;
              sub_1C2D434((CGThumbnailListItem_o *)(v49 + 32), (int32_t)v41, v44, v45);
            }
            goto LABEL_110;
          }
        }
      }
    }
    goto LABEL_124;
  }
  v50 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v34->fields.svtCommentEntityList,
                                                       (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)transform + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)transform + 23);
    v51 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantCommentEntity__TypeInfo);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__,
      0);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ServantCommentEntity__o *)v51;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)v51, v54, v55);
  }
  if ( !v50 )
    goto LABEL_124;
  System_Collections_Generic_List_object___Sort_58242632(
    v50,
    v51,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  if ( v50->fields._size < 1 )
  {
LABEL_103:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0) || SvtType__IsEnemyCollectionDetail(type, 0) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v100);
        goto LABEL_110;
      }
    }
    goto LABEL_124;
  }
  v56 = 0;
  v57 = 0;
  v58 = 1;
  v113 = v50;
  do
  {
    transform = System_Collections_Generic_List_object___get_Item(
                  v50,
                  v57,
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    if ( !transform )
      goto LABEL_124;
    v59 = (ServantCommentEntity_o *)transform;
    if ( !ServantCommentEntity__IsHideUntilCond((ServantCommentEntity_o *)transform, 0)
      || (transform = (void *)ServantCommentEntity__IsOpen(v59, -1, 1, 0), ((unsigned __int8)transform & 1) != 0) )
    {
      if ( !((v57 == 0) | v56 & 1) )
      {
        if ( ServantCommentEntity__IsProfileLabel(v59, 0) )
        {
          transform = System_Collections_Generic_List_object___get_Item(
                        v50,
                        v57 - 1,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
          if ( !transform )
            goto LABEL_124;
          if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0) )
            goto LABEL_65;
        }
        transform = (void *)ServantCommentEntity__IsDetailLabel(v59, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = System_Collections_Generic_List_object___get_Item(
                        v50,
                        v57 - 1,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
          if ( !transform )
            goto LABEL_124;
          transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            goto LABEL_65;
        }
        if ( !*p_mainInfo )
          goto LABEL_124;
        v60 = (*p_mainInfo)->fields.svtEntity;
        if ( !v60 )
          goto LABEL_124;
        v61 = v60->fields.type;
        if ( !SvtType__IsServant(v61, 0) && !SvtType__IsEnemyCollectionDetail(v61, 0) )
        {
LABEL_65:
          v56 = 0;
        }
        else
        {
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v62);
          v56 = 1;
        }
      }
      if ( ServantCommentEntity__IsDetailLabel(v59, 0) )
      {
        v63 = *v3;
        profile2Object = (Il2CppObject *)this->fields.profileObject;
      }
      else
      {
        v65 = 0;
        if ( !ServantCommentEntity__IsProfileLabel(v59, 0) )
          goto LABEL_73;
        v63 = *v3;
        profile2Object = (Il2CppObject *)this->fields.profile2Object;
      }
      if ( !v63->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v63);
      v65 = UnityEngine_Object__Instantiate_object_(
              profile2Object,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_73:
      if ( !(*v3)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v3);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v65 )
          goto LABEL_124;
        v66 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v65,
                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        if ( ServantCommentEntity__IsProfileLabel(v59, 0) )
          v67 = v58;
        else
          v67 = 0;
        IsOpen = ServantCommentEntity__IsOpen(v59, -1, 1, 0);
        v117 = v56;
        if ( IsOpen )
        {
          v114 = v58;
          v70 = v3;
          v71 = p_mainInfo;
          v72 = *p_mainInfo;
          id = v59->fields.id;
          IsNew = ServantCommentEntity__IsNew(v59, 0);
          transform = ServantCommentEntity__GetComment(v59, 0);
          if ( !v66 )
            goto LABEL_124;
          ServantStatusFlavorTextListViewObject__SetItem(
            (ServantStatusFlavorTextListViewObject_o *)v66,
            v72,
            id,
            1,
            IsNew,
            (System_String_o *)transform,
            v67,
            v75);
          p_mainInfo = v71;
          v50 = v113;
          v58 = v114;
          v3 = v70;
        }
        else
        {
          transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                        (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                        v59,
                        v69);
          if ( !v66 )
            goto LABEL_124;
          ServantStatusFlavorTextListViewObject__SetItem(
            (ServantStatusFlavorTextListViewObject_o *)v66,
            *p_mainInfo,
            v59->fields.id,
            0,
            0,
            (System_String_o *)transform,
            v67,
            v77);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(
          this,
          &basePositon,
          (ServantStatusFlavorTextListViewObject_o *)v66,
          v76);
        CondTitle = ServantCommentEntity__GetCondTitle(v59, 0);
        if ( ServantCommentEntity__IsProfileLabel(v59, 0) || !System_String__IsNullOrEmpty(CondTitle, 0) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(
            (ServantStatusFlavorTextListViewObject_o *)v66,
            CondTitle,
            v79);
        if ( ServantCommentEntity__IsProfileLabel(v59, 0) || !ServantCommentEntity__IsConst(v59, 0) )
        {
          v80 = sub_1C2D6DC(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
          System_Object___ctor((Il2CppObject *)v80, 0);
          if ( !v80 )
            goto LABEL_124;
          *(_QWORD *)(v80 + 16) = v59;
          sub_1C2D434((CGThumbnailListItem_o *)(v80 + 16), (int32_t)v59, v81, v82);
          *(_QWORD *)(v80 + 24) = v66;
          sub_1C2D434((CGThumbnailListItem_o *)(v80 + 24), (int32_t)v66, v83, v84);
          *(_DWORD *)(v80 + 32) = 0;
          transform = *p_servantProfileList;
          if ( !*p_servantProfileList )
            goto LABEL_124;
          v87 = *((_QWORD *)transform + 2);
          v88 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__;
          ++*((_DWORD *)transform + 7);
          if ( !v87 )
            goto LABEL_124;
          v89 = *((int *)transform + 6);
          if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)transform,
              (Il2CppObject *)v80,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = v87 + 8 * v89;
            *((_DWORD *)transform + 6) = v89 + 1;
            *(_QWORD *)(v90 + 32) = v80;
            sub_1C2D434((CGThumbnailListItem_o *)(v90 + 32), v80, v85, v86);
          }
        }
        transform = (void *)ServantCommentEntity__IsProfileLabel(v59, 0);
        v93 = (System_Collections_Generic_List_object__o *)*p_objectList;
        if ( !*p_objectList )
          goto LABEL_124;
        items = v93->fields._items;
        v95 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
        ++v93->fields._version;
        v56 = v117;
        if ( !items )
          goto LABEL_124;
        size = v93->fields._size;
        v58 += (unsigned __int8)transform & 1;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v93,
            v66,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
        }
        else
        {
          v97 = &items->obj.klass + size;
          v93->fields._size = size + 1;
          v97[4] = (Il2CppClass *)v66;
          sub_1C2D434((CGThumbnailListItem_o *)(v97 + 4), (int32_t)v66, v91, v92);
        }
      }
    }
    ++v57;
  }
  while ( v57 < v50->fields._size );
  if ( (v56 & 1) == 0 )
    goto LABEL_103;
LABEL_110:
  v101 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !(*v3)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v3);
  if ( UnityEngine_Object__op_Inequality(v101, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
      goto LABEL_115;
    }
LABEL_124:
    sub_1C2D6EC(transform, v7);
  }
LABEL_115:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_124;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_124;
  v102 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0);
  height = UIPanel__get_height(v102, 0);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_124;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_124;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v105);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_124;
  onChange = scrollBar->fields.onChange;
  v108 = (Il2CppObject *)this->fields.scrollView;
  v109 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v109, v108, Method_UIScrollView_OnScrollBar__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  transform = EventDelegate__Add(onChange, v109, 0);
  v110 = this->fields.scrollBar;
  if ( !v110 )
    goto LABEL_124;
  v111 = v110->fields.onChange;
  v112 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v112,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0);
  EventDelegate__Add(v111, v112, 0);
}


void ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v6; // x3
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C23811 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23811 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C2D6EC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v12.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  v7 = this->fields.objectList;
  if ( !v7 )
    goto LABEL_20;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  this->fields.mainInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, 0, size, v6);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_1C2D6EC(objectList, method);
  }
}


void ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager___c_c *v5; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  System_Predicate_object__o *_9__40_0; // x22
  Il2CppObject *v8; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t Index; // w0
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_4C2380B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
    sub_1C2D490(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_1C2D490(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__);
    sub_1C2D490(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_4C2380B = 1;
  }
  v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  _9__40_0 = (System_Predicate_object__o *)v5->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__40_0 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_object____ctor(
      _9__40_0,
      v8,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__,
      0);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__40_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v10, v11);
  }
  if ( !objectList )
    sub_1C2D6EC(v5, onFinished);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)objectList,
            (System_Predicate_T__o *)_9__40_0,
            (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( Index < 0 )
  {
    ActionExtensions__Call(onFinished, 0);
  }
  else
  {
    v14 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v14, 0);
  }
}


float ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
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


float ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(
        ServantStatusFlavorTextListViewManager_o *this,
        float moveValue,
        const MethodInfo *method)
{
  return fminf(fmaxf((float)(moveValue + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
}


System_String_o *ServantStatusFlavorTextListViewManager__GetConditionString(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantCommentEntity_o *svtCommentEntity,
        const MethodInfo *method)
{
  ServantCommentAddMaster_o *Master_object; // x0
  __int64 v5; // x1
  ServantCommentAddMaster_o *v6; // x20
  System_String_o *v7; // x22
  System_String_o *Conditiontext; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  System_String_o *v11; // x21
  LocalizationManager_c *v12; // x0
  bool v13; // w0
  bool v14; // w22
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v21; // x19
  System_String_o *ConditionString; // x0

  if ( (byte_4C2380A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11938/*"SERVANT_STATUS_PROFILE_CONDITION"*/);
    sub_1C2D490(&StringLiteral_16193/*"_FLAVOR2"*/);
    sub_1C2D490(&StringLiteral_16192/*"_FLAVOR"*/);
    sub_1C2D490(&StringLiteral_3715/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2380A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
LABEL_31:
    sub_1C2D6EC(Master_object, v5);
  v6 = Master_object;
  Master_object = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !v6 )
      goto LABEL_31;
    IsOpen = ServantCommentAddMaster__IsOpen(
               v6,
               svtCommentEntity->fields.svtId,
               svtCommentEntity->fields.id,
               svtCommentEntity->fields.priority,
               -1,
               0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtCommentEntity->fields.condMessage, 0);
    if ( IsOpen || !IsNullOrEmpty )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
      Conditiontext = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16192/*"_FLAVOR"*/,
                        0);
      goto LABEL_26;
    }
    v11 = ServantCommentEntity__GetConditiontext(svtCommentEntity, (System_String_o *)StringLiteral_16193/*"_FLAVOR2"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C2267D )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      byte_4C2267D = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager_TypeInfo;
    }
    v13 = System_String__op_Equality(v11, v12->static_fields->unknownNameText, 0);
    v14 = v13;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v13 )
      {
LABEL_22:
        v15 = (System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
LABEL_29:
        v7 = LocalizationManager__Get(v15, 0);
        return System_String__Format(v7, (Il2CppObject *)v11, 0);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v14 )
        goto LABEL_22;
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COND_TYPE_AND_FLAVOR2"*/, 0);
    v17 = System_String__Concat_63457864(v11, v16, 0);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v21 = v17;
    ConditionString = ServantCommentAddMaster__GetConditionString(
                        v6,
                        (System_String_o *)StringLiteral_16192/*"_FLAVOR"*/,
                        (System_String_o *)StringLiteral_16193/*"_FLAVOR2"*/,
                        svtId,
                        id,
                        priority,
                        -1,
                        0);
    v11 = System_String__Concat_63457864(v21, ConditionString, 0);
    v15 = (System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
  if ( !v6 )
    goto LABEL_31;
  v7 = (System_String_o *)Master_object;
  Conditiontext = ServantCommentAddMaster__GetConditionString(
                    v6,
                    (System_String_o *)StringLiteral_16192/*"_FLAVOR"*/,
                    (System_String_o *)StringLiteral_16193/*"_FLAVOR2"*/,
                    svtCommentEntity->fields.svtId,
                    svtCommentEntity->fields.id,
                    svtCommentEntity->fields.priority,
                    -1,
                    0);
LABEL_26:
  v11 = Conditiontext;
  return System_String__Format(v7, (Il2CppObject *)v11, 0);
}


void ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v6; // s8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  float v10; // s0
  _QWORD *monitor; // x8
  __int64 v12; // x0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2380C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2380C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields._IsIgnoreScroll_k__BackingField )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !scrollView
        || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0
        || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
            (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0) )
      {
        sub_1C2D6EC(scrollView, v4);
      }
      v6 = localPosition.fields.y - this->fields.initialScrollPosition.fields.y;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)scrollView,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
      v15 = v14;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
        if ( !v7 )
          break;
        current = v15.fields._current;
        if ( !v15.fields._current )
          sub_1C2D6EC(v7, v8);
        v10 = *(float *)&v15.fields._current[2].klass;
        if ( v10 <= v6 && v6 <= (float)(v10 + this->fields.scrollViewSize.fields.y) )
        {
          monitor = v15.fields._current[1].monitor;
          if ( !monitor )
            sub_1C2D6EC(v7, v8);
          v12 = monitor[17];
          if ( !v12 )
            sub_1C2D6EC(0, v8);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 456LL))(v12, *(_QWORD *)(*(_QWORD *)v12 + 464LL));
          OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
          if ( OnFinishedReadEvent )
            ((void (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))OnFinishedReadEvent->fields.invoke_impl)(
              OnFinishedReadEvent->fields.method_code,
              current[1].klass,
              OnFinishedReadEvent->fields.method);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    }
  }
}


void ServantStatusFlavorTextListViewManager__OnClickListView(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x20
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v8; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( !obj )
    sub_1C2D6EC(this, 0);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v8 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0;
      sub_1C2D434(p_callbackFunc, 0, v5, v6);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v8->fields.invoke_impl)(
        v8->fields.method_code,
        (unsigned int)obj->fields.id,
        v8->fields.method);
    }
  }
}


void ServantStatusFlavorTextListViewManager__OnClickListViewVoice(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      0,
      v5->fields.method);
  }
}


void ServantStatusFlavorTextListViewManager__OnEnable(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void ServantStatusFlavorTextListViewManager__OnMoveEnd(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C23815 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23815 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__RequestListObject(
        ServantStatusFlavorTextListViewManager_o *this,
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
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C23813 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C23813 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      objectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v11, v12);
      ServantStatusFlavorTextListViewObject__Init_35322240(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v10,
        delay,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__RequestListObject_35321220(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C23814 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C23814 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      objectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v9, v10);
      ServantStatusFlavorTextListViewObject__Init_35322324(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v8,
        v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void ServantStatusFlavorTextListViewManager__SetMode(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusFlavorTextListViewManager__SetMode_35321028(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__SetMode_35321028(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4C23812 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_4C23812 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C2D6EC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_35321220(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void ServantStatusFlavorTextListViewManager__SetMode_35321172(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusFlavorTextListViewManager__SetMode_35321028(this, mode, v6);
}


void ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !obj )
    sub_1C2D6EC(this, 0);
  if ( this->fields.initMode == 1 )
    v3 = 3;
  else
    v3 = 2;
  ServantStatusFlavorTextListViewObject__Init_35320908(obj, v3, method);
}


void ServantStatusFlavorTextListViewManager__SetObjectPosition(
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
  ServantStatusFlavorTextListViewManager_o *v11; // x22
  ServantStatusFlavorTextListViewManager_o *v12; // x22
  ServantStatusFlavorTextListViewManager_o *v13; // x22
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  ServantStatusFlavorTextListViewManager_c *v16; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4C2380F & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C2D490(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_4C2380F = 1;
  }
  if ( !obj )
    goto LABEL_21;
  Size = ServantStatusFlavorTextListViewObject__GetSize(obj, (const MethodInfo *)basePositon);
  v8 = Size >= 0 ? Size : Size + 1;
  v9 = v8 >> 1;
  basePositon->fields.y = basePositon->fields.y - (float)(v8 >> 1);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  if ( !v6->fields.listParent )
    goto LABEL_21;
  v10 = this;
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0);
  if ( !v10 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  if ( !this )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePositon, 0);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  v11 = this;
  if ( !byte_4C20DA7 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
    byte_4C20DA7 = 1;
  }
  if ( !v11 )
    goto LABEL_21;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  v12 = this;
  if ( !byte_4C20DA6 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v12,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)obj,
                                                             0),
        !v6->fields.listParent)
    || (v13 = this,
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_layer(v6->fields.listParent, 0),
        !v13) )
  {
LABEL_21:
    sub_1C2D6EC(this, basePositon);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v13, (int32_t)this, 0);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v14);
  ServantStatusFlavorTextListViewObject__SetManager(obj, v6, v15);
  v16 = ServantStatusFlavorTextListViewManager_TypeInfo;
  y = basePositon->fields.y;
  if ( !ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo);
    v16 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v16->static_fields->LIST_BLANK + v9);
}


void ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v5; // s8
  UnityEngine_Component_o *v6; // x8
  float v7; // s9
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x21
  ServantStatusFlavorTextListViewObject_o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2380D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    byte_4C2380D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0)
    || (v5 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   scrollView,
                                                   (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0)
    || (v6 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0) )
  {
    sub_1C2D6EC(scrollView, method);
  }
  v7 = *((float *)&v6[13].klass + 1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C2D6EC(v8, v9);
    v11 = *(ServantStatusFlavorTextListViewObject_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&off_18);
    if ( !v11 )
      sub_1C2D6EC(0, v9);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(v11, v9);
    *(float *)((char *)&qword_20 + (_QWORD)current) = fmaxf(vabds_f32(ProfileLastLinePosition.fields.y, v7) - v5, 0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23816 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_4C23816 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      objectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v6 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        sub_1C2D6EC(v6, v7);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v10.fields._current,
             v7) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName((ServantStatusFlavorTextListViewObject_o *)current, cvName, v9);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x19
  __int64 v8; // x1
  __int64 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23817 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    byte_4C23817 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v5 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C2D6EC(v5, v6);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v10.fields._current,
           v6) == 5 )
    {
      v9 = *(__int64 *)((char *)off_88 + (_QWORD)current);
      if ( !v9 )
        sub_1C2D6EC(0, v8);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 440LL))(
        v9,
        *(__int64 *)((char *)&qword_28 + (_QWORD)current),
        *(_QWORD *)(*(_QWORD *)v9 + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
}


void ServantStatusFlavorTextListViewManager__add_callbackFunc(
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

  if ( (byte_4C23805 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_4C23805 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc(v11, v12, v13);
}


void ServantStatusFlavorTextListViewManager__add_callbackFunc2(
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

  if ( (byte_4C23807 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C23807 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v11, v12, v13);
}


bool ServantStatusFlavorTextListViewManager__get_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsIgnoreScroll_k__BackingField;
}


bool ServantStatusFlavorTextListViewManager__get_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void ServantStatusFlavorTextListViewManager__remove_callbackFunc(
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

  if ( (byte_4C23806 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_4C23806 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ServantStatusFlavorTextListViewManager__add_callbackFunc2(v11, v12, v13);
}


void ServantStatusFlavorTextListViewManager__remove_callbackFunc2(
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

  if ( (byte_4C23808 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C23808 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


void ServantStatusFlavorTextListViewManager__set_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIgnoreScroll_k__BackingField = value;
}


void ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
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
  if ( (byte_4C23804 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23804 = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1C2D6EC(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0);
    UIProgressBar__set_alpha(v8, alpha, 0);
  }
}


void ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E030;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6DFE8;
}


System_IAsyncResult_o *ServantStatusFlavorTextListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4C2381A & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C2381A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
        ServantStatusFlavorTextListViewManager_ServantProfile_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43___ctor(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__MoveNext(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v2; // x19
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x22
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v5; // x20
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v6; // x8
  float v7; // s8
  float v8; // s9
  int v9; // w21
  float v10; // s8
  float v11; // s0
  float timer_5__4; // s8
  float duration_5__3; // s0
  float deltaTime; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s2
  bool v18; // nf
  float v19; // s0
  float moveValue_5__2; // s8
  float v21; // s0
  float v22; // s0
  float v23; // s1
  bool result; // w0
  float v25; // s0
  float v26; // s0
  float v27; // s8
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C2381C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    byte_4C2381C = 1;
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
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              v2->fields.targetIndex,
                                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v5 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v6 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    v7 = *((float *)&v6[4].fields.__2__current + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              LODWORD(this->fields.__2__current) - 1,
                                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    v8 = *((float *)&this[1].fields.__1__state + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)ServantStatusFlavorTextListViewObject__GetSize(
                                                                              (ServantStatusFlavorTextListViewObject_o *)this,
                                                                              method);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v9 = (int)this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v10 = vabds_f32(v8 + (float)((float)v9 * -0.5), v7) - UIPanel__get_height((UIPanel_o *)this, 0);
    if ( v10 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
      goto LABEL_30;
    }
    if ( !v5 )
      goto LABEL_35;
    TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(
                    (ServantStatusFlavorTextListViewObject_o *)v5,
                    method);
    v11 = fabsf(TopPosition.fields.y);
    if ( v11 >= v10 )
      v11 = v10;
    v2->fields._moveValue_5__2 = v11;
    if ( v11 <= 0.0 )
      goto LABEL_30;
    timer_5__4 = 0.0;
    duration_5__3 = fminf(fmaxf((float)(v11 + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
    v2->fields._duration_5__3 = duration_5__3;
    *(_QWORD *)&v2->fields._timer_5__4 = 0;
  }
  if ( timer_5__4 >= duration_5__3 )
  {
LABEL_30:
    ActionExtensions__Call(v2->fields.onFinished, 0);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v15 = v2->fields._duration_5__3;
  v16 = timer_5__4 + deltaTime;
  if ( v16 <= v15 )
    v17 = v16;
  else
    v17 = v2->fields._duration_5__3;
  v18 = v16 < 0.0;
  v19 = 0.0;
  if ( !v18 )
    v19 = v17;
  v2->fields._timer_5__4 = v19;
  if ( !_4__this )
    goto LABEL_35;
  moveValue_5__2 = v2->fields._moveValue_5__2;
  v21 = v19 / (float)(v15 * 0.5);
  if ( v21 >= 1.0 )
  {
    v25 = exp2f((float)(v21 + -1.0) * -10.0);
    v23 = moveValue_5__2 * 0.5;
    v22 = 2.0 - v25;
  }
  else
  {
    v22 = powf(v21, 5.0);
    v23 = moveValue_5__2 * 0.5;
  }
  this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.scrollView;
  v26 = v23 * v22;
  if ( !this )
LABEL_35:
    sub_1C2D6EC(this, method);
  v27 = v26 + 0.0;
  ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *, const char *, float, float, float))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze,
    0.0,
    (float)(v26 + 0.0) - v2->fields._prevValue_5__5,
    0.0);
  v2->fields._prevValue_5__5 = v27;
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v29, v30);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_IEnumerator_Reset(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_IEnumerator_get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_IDisposable_Dispose(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusFlavorTextListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2381B & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_4C2381B = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantStatusFlavorTextListViewManager___c___CreateList_b__38_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantCommentEntity_o *a,
        ServantCommentEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2D6EC(this, a);
  return a->fields.id - b->fields.id;
}


bool ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__40_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.isNew;
}